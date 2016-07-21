TEST_F(ElektaTask2, GlodUserLessIncludeMinutesShouldPay)
{
  ElektaPlanBAccout GlodUser(49.95,1000,0.45);
  float fGlodUserM = GlodUser.calculateMonthBill(899);
  ASSERT_EQ(49.95,fGlodUserM);
}

TEST_F(ElektaTask2, GlodUserEqualIncludeMinutesShouldPay)
{
  ElektaPlanBAccout GlodUser(49.95,1000,0.45);
  float fGlodUserM = GlodUser.calculateMonthBill(1000);
  ASSERT_EQ(49.95,fGlodUserM);
}

TEST_F(ElektaTask2, GlodUserMoreIncludeMinutesShouldPay)
{
  ElektaPlanBAccout GlodUser(49.95,1000.0.45);
  float fGlodUserM = GlodUser.calculateMonthBill(1001);
  ASSERT_EQ(49.95+0.45,fGlodUserM);
}

TEST_F(ElektaTask2, SilverUserLessIncludeMinutesShouldPay)
{
  ElektaPlanBAccout SilverUser(29.95,500,0.54);
  float fSilverUserM = SilverUser.calculateMonthBill(499);
  ASSERT_EQ(29.95,fGlodUserM);
}

TEST_F(ElektaTask2, SilverUserEqualIncludeMinutesShouldPay)
{
  ElektaPlanBAccout SilverUser(29.95,500,0.54);
  float fSilverUserM = SilverUser.calculateMonthBill(500);
  ASSERT_EQ(29.95,fGlodUserM);
}

TEST_F(ElektaTask2, SilverUserMoreIncludeMinutesShouldPay)
{
  ElektaPlanBAccout SilverUser(29.95,500,0.54);
  float fSilverUserM = SilverUser.calculateMonthBill(520);
  ASSERT_EQ(29.95+0.54*20,fGlodUserM);
}
