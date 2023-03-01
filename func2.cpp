#include "middle_list.h"

void itc_pos_neg_analysis_lst(const std::vector<int> &lst){
    std::vector<int> lst1, lst2, lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    std::cout << "Positive:\t\tNegative:\n";
    std::cout << "Number of numbers: " << lst3.size() << ",\t\t" << "Number of numbers: " << lst1.size() << "\n";
    std::cout << "Maximum number: " << lst_max(lst3) << ",\t\t" << "Maximum number: " << lst_max(lst1) << "," << "\n";
    std::cout << "Minimum number: " << lst_min(lst3) << ",\t\t" << "Minimum number: " << lst_min(lst1) << "," << "\n";
    std::cout << "Sum of numbers: " << itc_sumlst(lst3) << ",\t\t" << "Sum of numbers: " << itc_sumlst(lst1) << "," << "\n";
    std::cout << "Mean value: " << ((lst3.size() > 0)?(itc_sumlst(lst3)/int(lst3.size())):0) << ",\t\t" << "Mean value: " << ((lst1.size() > 0)?(itc_sumlst(lst1)/int(lst1.size())):0) << "\n";
    std::cout << "Number of zeros: " << lst2.size();
}

int lst_max(std::vector<int> lst){
    if(lst.size() == 0){
        return 0;
    }
    int max = -2147483648;
    for(long long i=0; i<lst.size(); i++){
        if(lst[i] > max){
            max = lst[i];
        }
    }
    return max;
}

int lst_min(std::vector<int> lst){
    if(lst.size() == 0){
        return 0;
    }
    int min = 2147483647;
    for(long long i=0; i<lst.size(); i++){
        if(lst[i] < min){
            min = lst[i];
        }
    }
    return min;
}
