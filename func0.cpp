#include "middle_list.h"

std::vector<char> itc_strlist(std::string str){
    std::vector<char> o;
    for(int i=0; str[i] != '\0'; i++){
        o.push_back(str[i]);
    }
    return o;
}

std::string itc_join(std::vector<char> lst, std::string sep){
    std::string o;
    for(int i=0; i<lst.size(); i++){
        o += lst[i] + sep;
    }
    return o;
}

std::string itc_rmstrspc(std::string str){
    std::string o;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            o += str[i];
        }
    }
    return o;
}

std::string itc_rmstrchar(std::string str, std::string less){
    std::string o;
    bool check = 1;
    for(int i=0; str[i] != '\0'; i++){
        check = 1;
        for(int j=0; less[j] != '\0'; j++){
            if(str[i] == less[j]){
                check = 0;
                break;
            }
        }
        if(check){
            o += str[i];
        }
    }
    return o;
}

long itc_sumlst(const std::vector<int> &lst){
    long o = 0;
    for(int i=0; i<lst.size(); i++){
        o += lst[i];
    }
    return o;
}