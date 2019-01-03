#include <iostream>
#include <vector>

using namespace std;

struct question{
    int score; //��ֵ
    int number; //ѡ�����
    int number_correct; //��ȷ�����
    int count; //�������
    int weight; //����Ȩ�أ�a-e�ֱ���1��2��4��8��16
};

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> grade(n); //n���˵ĳɼ�
    vector<struct question> v(m); //m����
    int max = 0; //������������
    bool allCorrect = true;
    char tmp;
    for(int i = 0; i < m; ++i){
        scanf("%d %d %d", &v[i].score, &v[i].number, &v[i].number_correct);
        v[i].count = 0; //init
        v[i].weight = 0;
        for(int j = 0; j < v[i].number_correct; ++j){
            scanf(" %c", &tmp); //%cǰ���пո�ƥ��һ�������ո�
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
    for(int i = 0; i < n; ++i){ //n����
        for(int j = 0; j < m; ++j){ //m����
            int tmp_weight = 0; //ѧ����ÿ��𰸵�Ȩ��
            scanf(" %c", &tmp); //����������
            int num; //ѧ��ÿ��Ĵ���
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
                if(tmp_weight == v[j].weight){ //��ÿ��𰸵�Ȩ�رȽ�
                    grade[i] += v[j].score; //����ȣ��ӷ�
                }
                else{
                    allCorrect = false;
                    ++v[j].count; //����������+1
                    if(v[j].count > max){
                        max = v[j].count;
                    }
                }
            }
            else{
                allCorrect = false;
                ++v[j].count; //����������+1
                if(v[j].count > max){
                    max = v[j].count;
                }
            }
            scanf(" %c", &tmp); //����������
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
                result.push_back(i + 1); //����ż���������
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
