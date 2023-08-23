    deque<string> split(string s, string delimiter) {
        deque<string> ret;
        size_t pos_start = 0, pos_end, delim_len = delimiter.length();
        string token;
        while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
            token = s.substr(pos_start, pos_end - pos_start);
            pos_start = pos_end + delim_len;
            ret.push_back(token);
        }
        ret.push_back(s.substr(pos_start));
        return ret;
    }
