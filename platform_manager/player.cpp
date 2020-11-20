
Player::Player()
{

}

void Player::login() {
    cout << "请输入登录账号:" << endl;
    cin >> loginAccout;
    bool result = this->verfileAccout(inputAccount);
    if (result == false) {
        court << "" << endl;
    }
}

bool Player::verfileAccout(unsigned int inputAccount)
{
    return inputAccount == loginAccout;

}
