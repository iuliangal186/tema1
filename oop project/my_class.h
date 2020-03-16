
//my_class.h
namespace N
{
    class N::Obiect{
    private:
        void* adress;
        int *dimension;

    public:
        Obiect()
        {
            this->dimension=0;
        }
        Obiect(const Obiect &obj)
        {
            dimension=new int;
            *dimension=*obj.dimension;
        }
        ~Obiect()
        {
            delete dimension;
        }
        void read(void* adr, int dimens){
            adress=adr;
            *dimension=dimens;
            }
        void get_adress(void* ad){
            ad=adress;
            }
        int *getdimension(){
            return dimension;
            }

        friend bool operator==(const Obiect &o1, const Obiect &o2)
        {
            return (o1==o2);
        }

        friend bool operator!=(const Obiect &o1, const Obiect &o2)
        {
            return !(o1==o2);
        }

        friend bool operator<(const Obiect &o1, const Obiect &o2)
        {
            return (o1<o2);
        }

        friend bool operator<=(const Obiect &o1, const Obiect &o2)
        {
            return !(o1>o2);
        }

        friend bool operator>(const Obiect &o1, const Obiect &o2)
        {
            return (o1>o2);
        }

        friend bool operator>=(const Obiect &o1, const Obiect &o2)
        {
            return !(o1<o2);
        }

};

}
