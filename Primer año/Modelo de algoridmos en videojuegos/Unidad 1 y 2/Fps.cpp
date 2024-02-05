
class Weapon
{
    public:
        int _damage;
    protected:
        int _recoil;
        int _maxAmmunation;
        int _currentAmunation;
        int _reloadTime;
        
};
class Player
{
    private:
        int _health;
        int _speed;
        int _aceleration;
        int _jumpForce;
        
    protected:
        void Shoot();
        void TakeHit();
        void Move();
        void Jump();
        void Crouch();
        void StandUp();
        void Aim();
        void MoveCamera();
        void Die();
        void ChangeWeapon();
        void ThrowGranade();
        void InvokeRagdoll();

        Weapon _weapons[];
};