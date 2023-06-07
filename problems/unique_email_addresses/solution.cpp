class Solution {
public:
    string getLocal(string email){
        string local = email.substr(0,email.find('@'));
        local = local.substr(0,local.find('+'));
        local = regex_replace(local,regex("\\."),"");
        return local;
    }
    string getDomain(string email){
        string domain = email.substr(email.find('@')+1);
        return domain;
    }
    int numUniqueEmails(vector<string>& emails) {
        set<string>uniqueEmails;
        for(int i = 0; i < emails.size(); i++){
            string local = getLocal(emails[i]);
            string domain = getDomain(emails[i]);
            uniqueEmails.insert(local+"@"+domain);
        }
        return uniqueEmails.size();
    }
};