class HiteableObject
{
    protected:
        int _speed;
        int _recoil;
        void Shoot();
        virtual void Move(int directionX, int directionY);
    public:
        HiteableObject(int speed, int recoil);
        
};
HiteableObject:: HiteableObject(int speed, int recoil)
{
    _speed=speed;
    _recoil=recoil;
}
class Enemy: public HiteableObject
{
    public:
        int heal;
        
    private:
        void Die();
        int OnHit();

};
class Character: public HiteableObject
{
    public:
        int lifes;
        int score;    
        void Lose();
        int OnHit();
};