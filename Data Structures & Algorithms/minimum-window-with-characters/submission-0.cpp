class Solution {
public:
    string minWindow(string s, string t) {
    int requiredCount[128] = {0};   // how many of each char t needs (never changes)
    int windowCount[128] = {0};     // how many of each char the window has right now

    for (char c : t) {
        requiredCount[c]++;
    }

    int matchedChars = 0;           // how many of t's chars the window covers
    int windowLeft = 0;
    int bestStart = 0;
    int bestLength = INT_MAX;

    for (int windowRight = 0; windowRight < s.size(); windowRight++) {

        // JOB 1: add s[windowRight] to the window
        char addedChar = s[windowRight];
        windowCount[addedChar]++;
        if (windowCount[addedChar] <= requiredCount[addedChar]) {
            matchedChars++;         // this copy was actually useful
        }

        // JOB 2 and 3: while the window is valid, record it, then shrink it
        while (matchedChars == t.size()) {

            // JOB 2: record the window if it is the smallest so far
            int currentLength = windowRight - windowLeft + 1;
            if (currentLength < bestLength) {
                bestStart = windowLeft;
                bestLength = currentLength;
            }

            // JOB 3: remove s[windowLeft] from the window
            char removedChar = s[windowLeft];
            if (windowCount[removedChar] <= requiredCount[removedChar]) {
                matchedChars--;     // we are removing a useful copy
            }
            windowCount[removedChar]--;
            windowLeft++;
        }
    }

    if (bestLength == INT_MAX) {
        return "";
    }
    return s.substr(bestStart, bestLength);
    }
};
