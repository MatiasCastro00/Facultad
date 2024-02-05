class Character
{
    protected:
        int _helath;
        int _speed;
    public:
        int Team; // 0 alumno - 1 profesor

    Character()   {
        _helath=100;
        _speed=10;
        Team = 1;
    }
    void TakeDamage();
    void TakeHealing();
    void Move();
};

class Healer : public Character
{
    protected:
        int _healingAmount;
    public:
        Healer() : _healingAmount(20) {}
        void Heal();
};

class Attacker : public Character
{
    protected:
        int _damage;
    public:
        Attacker() : _damage(20) {}
        void Attack();
};


int main()
{
    Healer _healer1;
    _healer1.Team=1; // es profesor
    
    Healer _healer2;
    _healer2.Team=0; // es alumno
}
