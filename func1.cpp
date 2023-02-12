#include "middle_list.h"

long itc_sum_even_lst(const std::vector<int> &lst){
    long o = 0;
    for(int i=0; i<lst.size(); i++){
        if(i % 2 == 0){
            o += lst[i];
        }
    }
    return o;
}

long itc_sum_even_part_lst(const std::vector<int> &lst){
    long o = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] % 2 == 0){
            o += lst[i];
        }
    }
    return o;
}

void itc_odd_even_separator_lst(const std::vector<int> &lst, std::vector<int> &lst1, std::vector<int> &lst2){
    for(int i=0; i<lst.size(); i++){
        if(lst[i] % 2 == 0){
            lst1.push_back(lst[i]);
        }else{
            lst2.push_back(lst[i]);
        }
    }
}

void itc_pos_neg_separator_lst(const std::vector<int> &lst, std::vector<int> &lst1, std::vector<int> &lst2, std::vector<int> &lst3){
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0){
            lst1.push_back(lst[i]);
        }
        if(lst[i] == 0){
            lst2.push_back(lst[i]);
        }
        if(lst[i] > 0){
            lst3.push_back(lst[i]);
        }
    }  
}

void itc_odd_even_analysis_lst(std::vector<int> &lst){
    std::vector<int> lst1, lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    std::cout << "List analysis:\n";
    std::cout << "Number of even numbers: " << lst1.size() << "," << "\t\t" << "Number of odd numbers: " << lst2.size() << "\n";
    std::cout << "Maximum even number: " << lst_max(lst1) << "," << "\t\t" << "Maximum odd number: " << lst_max(lst2) << "," << "\n";
    std::cout << "Minimum even number: " << lst_min(lst1) << "," << "\t\t" << "Minimum odd number: " << lst_min(lst2) << "," << "\n";
    std::cout << "Sum of even numbers: " << itc_sumlst(lst1) << "," << "\t\t" << "Sum of odd numbers: " << itc_sumlst(lst2) << "," << "\n";
}