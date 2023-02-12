#include <vector>
#include <iostream>
#include <string>

std::vector<char> itc_strlist(std::string str);
std::string itc_join(std::vector<char> lst, std::string sep);
std::string itc_rmstrspc(std::string str);
std::string itc_rmstrchar(std::string str, std::string less);
long itc_sumlst(const std::vector<int> &lst);

long itc_sum_even_lst(const std::vector<int> &lst);
long itc_sum_even_part_lst(const std::vector<int> &lst);
void itc_odd_even_separator_lst(const std::vector<int> &lst, std::vector<int> &lst1, std::vector<int> &lst2);
void itc_pos_neg_separator_lst(const std::vector<int> &lst, std::vector<int> &lst1, std::vector<int> &lst2, std::vector<int> &lst3);
void itc_odd_even_analysis_lst(std::vector<int> &lst);

void itc_pos_neg_analysis_lst(const std::vector<int> &lst);



int lst_max(std::vector<int> lst);
int lst_min(std::vector<int> lst);