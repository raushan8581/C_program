# include <stdio.h>
# include <string.h>
struct student{
    int id;
    char gender;
    char hobby[67];
    int marks;
};  // raushan,raj,golu;  // will use also like this..
 struct student  raushan, raj, golu;  // it act as global variable(access from anywhwre)..
 //if this line written inside main function then it will known as local variable and can accessed only inside main.
 void marks()
 {
     printf("Golu gets %d marks",golu.marks);
 }
int main()
{
      raushan.id=12041200;
      printf("Raushan id is %d\n",raushan.id);
      golu.marks=87;
      raushan.gender='M';
      printf("Gender of Raushan is %c\n",raushan.gender);
      strcpy(raj.hobby,"Dancing");
      printf("Raj is intrested in %s\n",raj.hobby);
      marks();
    return 0;
}
// structures are user defined data type..allow to combine data of diff type and similar to array..
// structure members are accessed using (.) dot/structure member operator..use as e1.id=12; ..                    (structure name.member name)
// 