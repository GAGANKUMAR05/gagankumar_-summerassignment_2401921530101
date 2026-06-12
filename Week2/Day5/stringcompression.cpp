int compress(vector<char>& chars) {
    int n = chars.size();
    int j = 0;

    for (int i = 0; i < n; ) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            i++;
            count++;
        }

        chars[j++] = ch;

        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) {
                chars[j++] = c;
            }
        }
    }

    return j;
}