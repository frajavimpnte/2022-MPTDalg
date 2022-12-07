#ifndef EOQ_HH
#define EOQ_HH


class EOQ
{
    public:
        EOQ(float k, float h, float d);
        EOQ();

        void setK(float k);
        float getK();
        void setH(float h);
        float getH();
        void setD(float d);
        float getD();
        float solve();
        float print();

        virtual ~EOQ();

    protected:

    private:
        float k;
        float h;
        float d;
};

#endif // EOQ_HH
