class Spell
{
    public:
        int _damage;
        int _element;
    protected:
        int _manaUsage;
        int _castDelay;

};

class Player
{
    private:
        int _health;
        int _speed;
        int _aceleration;
        int _jumpForce;
        int _coins;
        bool _isTired;
        Spell _spells[];
        
    protected:
        void TakeHit();
        void Move();
        void Jump();
        void Crouch();
        void StandUp();
        void Die();
};