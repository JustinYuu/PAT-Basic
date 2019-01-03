#include <iostream>
#include <vector>

using namespace std;

struct question{
    int score; //分值
    int number; //选项个数
    int number_correct; //正确项个数
    int count; //出错次数
    int weight; //引入权重，a-e分别是1、2、4、8、16
};

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> grade(n); //n个人的成绩
    vector<struct question> v(m); //m道题
    int max = 0; //错误最多的题数
    bool allCorrect = true;
    char tmp;
    for(int i = 0; i < m; ++i){
        scanf("%d %d %d", &v[i].score, &v[i].number, &v[i].number_correct);
        v[i].count = 0; //init
        v[i].weight = 0;
        for(int j = 0; j < v[i].number_correct; ++j){
            scanf(" %c", &tmp); //%c前面有空格匹配一个或多个空格
            if(tmp == 'a'){
                v[i].weight += 1;
            }
            else if(tmp == 'b'){
                v[i].weight += 2;
            }
            else if(tmp == 'c'){
                v[i].weight += 4;
            }
            else if(tmp == 'd'){
                v[i].weight += 8;
            }
            else if(tmp == 'e'){
                v[i].weight += 16;
            }
        }
    }
    for(int i = 0; i < n; ++i){ //n个人
        for(int j = 0; j < m; ++j){ //m道题
            int tmp_weight = 0; //学生答每题答案的权重
            scanf(" %c", &tmp); //吸收左括号
            int num; //学生每题的答案数
            scanf("%d", &num);
            for(int k = 0; k < num; ++k){
                scanf(" %c", &tmp);
                if(tmp == 'a'){
                    tmp_weight += 1;
                }
                else if(tmp == 'b'){
                    tmp_weight += 2;
                }
                else if(tmp == 'c'){
                    tmp_weight += 4;
                }
                else if(tmp == 'd'){
                    tmp_weight += 8;
                }
                else if(tmp == 'e'){
                    tmp_weight += 16;
                }
            }
            if(num == v[j].number_correct){
                if(tmp_weight == v[j].weight){ //与每题答案的权重比较
                    grade[i] += v[j].score; //若相等，加分
                }
                else{
                    allCorrect = false;
                    ++v[j].count; //该题错误次数+1
                    if(v[j].count > max){
                        max = v[j].count;
                    }
                }
            }
            else{
                allCorrect = false;
                ++v[j].count; //该题错误次数+1
                if(v[j].count > max){
                    max = v[j].count;
                }
            }
            scanf(" %c", &tmp); //吸收右括号
        }
        printf("%d\n", grade[i]);
    }
    if(allCorrect){
        printf("Too simple\n");
    }
    else{
        vector<int> result;
        for(int i = 0; i < m; ++i){
            if(v[i].count == max){
                result.push_back(i + 1); //把题号加入数组中
            }
        }
        printf("%d ", max);
        for(int i = 0; i < result.size(); ++i){
            if(i == 0){
                printf("%d", result[i]);
            }
            else{
                printf(" %d", result[i]);
            }
        }
    }
    return 0;
}
