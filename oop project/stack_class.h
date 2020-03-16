using namespace N;
#define SIZE 5

// stack_class.h
namespace M
{
struct element{
    Obiect* obct;
    element *elem;
};

class Stiva{
private:
    element* vf_st;
    int top;
    element* num[SIZE];

public:
    void set_vf_st(element *n)
    {
        vf_st=n;
    }
    element* get_vf_st()
    {
        return vf_st;
    }
    Stiva()
    {
        this->vf_st=NULL;
    }

    ~Stiva()
    {
        delete vf_st;
    }

    bool is_vid(const Stiva &stck)
    {
        return (top==0);
    }

    void push(const Stiva &stck, element *n)
    {
        top++;
        num[top]=n;
        set_vf_st(n);
    }

    element* pop(const Stiva &stck)
    {
        element* temp;
        temp=num[top];
        --top;
        set_vf_st(num[top]);
        return temp;
    }
};
}
