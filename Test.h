#include <iostream>
#include <fstream>
#include "Cartoon.h"
#include "Documental.h"
#include "Feature.h"
#include "FilesCmp.h"

using namespace std;

class CartoonTest : public ::testing::Test {
};

TEST_F(CartoonTest, CheckInput) {
	ifstream ifst("InCartoon.txt");
	cartoon actual;
	actual.InData(ifst);

	cartoon c;
	c.t = cartoon::type::PAINTED;
	strcpy_s(c.name, "Frozen");
	strcpy_s(c.country, "USA");
	
	ASSERT_EQ(actual.t, c.t);
	ASSERT_STREQ(actual.name, c.name);
	ASSERT_STREQ(actual.country, c.country);
}

TEST_F(CartoonTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	cartoon c;
	c.t = cartoon::type::PAINTED;
	strcpy_s(c.name, "Frozen");
	strcpy_s(c.country, "USA");
	c.Out(ofst);
	ofst.close();

	ifstream expected("OutCartoon.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

//##################################################################################################
//##################################################################################################

class DocumentalTest : public ::testing::Test {
};

TEST_F(DocumentalTest, CheckInput) {
	ifstream ifst("InDocumental.txt");
	documental actual;
	actual.InData(ifst);

	documental d;
	d.year = 1;
	strcpy_s(d.name, "Wildlife");
	strcpy_s(d.country, "USA");

	ASSERT_EQ(actual.year, d.year);
	ASSERT_STREQ(actual.name, d.name);
	ASSERT_STREQ(actual.country, d.country);
}

TEST_F(DocumentalTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	documental d;
	d.year = 1;
	strcpy_s(d.name, "Wildlife");
	strcpy_s(d.country, "USA");
	d.Out(ofst);
	ofst.close();

	ifstream expected("OutDocumental.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

//##########################################################################################################
//##########################################################################################################

class FeatureTest : public ::testing::Test {
};

TEST_F(FeatureTest, CheckInput) {
	ifstream ifst("InFeature.txt");
	feature actual;
	actual.InData(ifst);

	feature f;
	strcpy_s(f.name, "Kill Bill");
	strcpy_s(f.country, "USA");
	strcpy_s(f.director, "Tarantino");

	ASSERT_STREQ(actual.name, f.name);
	ASSERT_STREQ(actual.country, f.country);
	ASSERT_STREQ(actual.director, f.director);
}

TEST_F(FeatureTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	feature f;
	strcpy_s(f.name, "Kill Bill");
	strcpy_s(f.country, "USA");
	strcpy_s(f.director, "Tarantino");
	f.Out(ofst);
	ofst.close();

	ifstream expected("OutFeature.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

//##########################################################################################################
//##########################################################################################################

class FilmTest : public ::testing::Test {
};

TEST_F(FilmTest, CheckInputCartoon) {
	ifstream ifst("FilmInCartoon.txt");
	
	film *actual = film::In(ifst);

	cartoon c;
	c.t = cartoon::type::PAINTED;
	strcpy_s(c.name, "Frozen");
	strcpy_s(c.country, "USA");
	
	ASSERT_STREQ(actual->name, c.name);
	ASSERT_STREQ(actual->country, c.country);
}

TEST_F(FilmTest, CheckInputDocumental) {
	ifstream ifst("FilmInDocumental.txt");
	film *actual = film::In(ifst);

	documental expected;
	strcpy_s(expected.name, "Wildlife");
	strcpy_s(expected.country, "USA");
	expected.year = 1;

	ASSERT_STREQ(actual->name, expected.name);
	ASSERT_STREQ(actual->country, expected.country);
}


TEST_F(FilmTest, CheckInputFeature) {
	ifstream ifst("FilmInFeature.txt");
	film *actual = film::In(ifst);

	feature expected;
	strcpy_s(expected.name, "Kill Bill");
	strcpy_s(expected.country, "USA");
	strcpy_s(expected.director, "Tarantino");
	
	ASSERT_STREQ(actual->name, expected.name);
	ASSERT_STREQ(actual->country, expected.country);
}

TEST_F(FilmTest, CheckOutputCartoon) {
	ofstream ofst("OutTest.txt");

	cartoon c;
	strcpy_s(c.name, "Frozen");
	strcpy_s(c.country, "USA");
	c.t = cartoon::type::PAINTED;
	c.film::Out(ofst);

	ifstream expected("FilmOutCartoon.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(FilmTest, CheckOutputDocumental) {
	ofstream ofst("OutTest.txt");

	documental d;
	strcpy_s(d.name, "Wildlife");
	strcpy_s(d.country, "USA");
	d.year = 1;
	d.film::Out(ofst);

	ifstream expected("FilmOutDocumental.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(FilmTest, CheckOutputFeature) {
	ofstream ofst("OutTest.txt");

	feature f;
	strcpy_s(f.name, "Kill Bill");
	strcpy_s(f.country, "USA");
	strcpy_s(f.director, "Tarantino");
	f.film::Out(ofst);

	ifstream expected("FilmOutFeature.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}


TEST_F(FilmTest, CheckFunc) {
	cartoon c;
	strcpy_s(c.name, "Kill Bill");
	ASSERT_EQ(c.FuncFilm(), 2);
}


TEST_F(FilmTest, CheckZeroFunc) {
	cartoon c;
	strcpy_s(c.name, "KLB");
	ASSERT_EQ(c.FuncFilm(), 0);
}

TEST_F(FilmTest, CheckCompare) {
	cartoon c1;
	film* c2 = new cartoon;
	strcpy_s(c1.name, "Kill Bill");
	strcpy_s(c2->name, "Bill");

	ASSERT_TRUE(c1.Compare(c2));
}

TEST_F(FilmTest, CheckSumElem) {
	cartoon c;
	strcpy_s(c.name, "Kill Bill");
	ASSERT_EQ(c.SumElementsOfString(10), 5);
}

TEST_F(FilmTest, CheckZeroSumElem) {
	cartoon c;
	strcpy_s(c.name, "");
	ASSERT_EQ(c.SumElementsOfString(10), 0);
}

//#############################################################################################
//#############################################################################################

class ContainerTest : public ::testing::Test {
};

TEST_F(ContainerTest, CheckInitContainer) {

	container c;
	
	ASSERT_EQ(c.kol, 0);
	ASSERT_EQ(c.n, 10);
	for (int i = 0; i < c.n; i++)
	{
		ASSERT_TRUE(c.mas[i] == NULL);
	}
}

TEST_F(ContainerTest, CheckClearEmptyContainer) {

	container c;

	c.Clear();

	ASSERT_EQ(c.kol, 0);
	for (int i = 0; i < c.n; i++)
	{
		ASSERT_TRUE(c.mas[i] == NULL);
	}
}

TEST_F(ContainerTest, CheckClearContainer) {
	container c;

	film *f = new cartoon;
	strcpy_s(f->name, "Kill Bill");

	int sum = 0;
	sum = f->SumElementsOfString(c.n);
	c.mas[sum] = new node;
	c.mas[sum]->next = NULL;
	c.mas[sum]->f = f;
	c.Clear();

	ASSERT_EQ(c.kol, 0);
	for (int i = 0; i < c.n; i++)
	{
		ASSERT_TRUE(c.mas[i] == NULL);
	}
}

TEST_F(ContainerTest, CheckOutCartoon) {
	ofstream ofst("OutTest.txt");

	container c;
	c.kol = 3;

	cartoon* f1 = new cartoon;
	strcpy_s(f1->name, "Frozen");
	strcpy_s(f1->country, "USA");
	f1->t = cartoon::type::PAINTED;

	documental* f2 = new documental;
	strcpy_s(f2->name, "Wildlife");
	strcpy_s(f2->country, "USA");
	f2->year = 1;
	
	feature* f3 = new feature;
	strcpy_s(f3->name, "Kill Bill");
	strcpy_s(f3->country, "USA");
	strcpy_s(f3->director, "Tarantino");
	
	int sum = 0;
	sum = f1->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f1;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f1;
		c.mas[sum] = vn;
	}

	sum = f2->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f2;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f2;
		c.mas[sum] = vn;
	}

	sum = f3->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f3;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f3;
		c.mas[sum] = vn;
	}

	c.OutCartoon(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutCartoon.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOutDocumental) {
	ofstream ofst("OutTest.txt");

	container c;
	c.kol = 3;

	cartoon* f1 = new cartoon;
	strcpy_s(f1->name, "Frozen");
	strcpy_s(f1->country, "USA");
	f1->t = cartoon::type::PAINTED;

	documental* f2 = new documental;
	strcpy_s(f2->name, "Wildlife");
	strcpy_s(f2->country, "USA");
	f2->year = 1;

	feature* f3 = new feature;
	strcpy_s(f3->name, "Kill Bill");
	strcpy_s(f3->country, "USA");
	strcpy_s(f3->director, "Tarantino");

	int sum = 0;
	sum = f1->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f1;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f1;
		c.mas[sum] = vn;
	}

	sum = f2->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f2;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f2;
		c.mas[sum] = vn;
	}

	sum = f3->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f3;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f3;
		c.mas[sum] = vn;
	}

	c.OutDocumental(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutDocumental.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOutFeature) {
	ofstream ofst("OutTest.txt");

	container c;
	c.kol = 3;

	cartoon* f1 = new cartoon;
	strcpy_s(f1->name, "Frozen");
	strcpy_s(f1->country, "USA");
	f1->t = cartoon::type::PAINTED;

	documental* f2 = new documental;
	strcpy_s(f2->name, "Wildlife");
	strcpy_s(f2->country, "USA");
	f2->year = 1;

	feature* f3 = new feature;
	strcpy_s(f3->name, "Kill Bill");
	strcpy_s(f3->country, "USA");
	strcpy_s(f3->director, "Tarantino");

	int sum = 0;
	sum = f1->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f1;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f1;
		c.mas[sum] = vn;
	}

	sum = f2->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f2;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f2;
		c.mas[sum] = vn;
	}

	sum = f3->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f3;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f3;
		c.mas[sum] = vn;
	}

	c.OutFeature(ofst); 
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutFeature.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckSort) {
	ofstream ofst("OutTest.txt");

	container c;
	c.kol = 3;

	cartoon* f1 = new cartoon;
	strcpy_s(f1->name, "Frozen");
	strcpy_s(f1->country, "USA");
	f1->t = cartoon::type::PAINTED;

	documental* f2 = new documental;
	strcpy_s(f2->name, "Wildlife");
	strcpy_s(f2->country, "USA");
	f2->year = 1;

	feature* f3 = new feature;
	strcpy_s(f3->name, "Kill Bill");
	strcpy_s(f3->country, "USA");
	strcpy_s(f3->director, "Tarantino");

	int sum = 0;
	sum = f1->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f1;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f1;
		c.mas[sum] = vn;
	}

	sum = f2->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f2;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f2;
		c.mas[sum] = vn;
	}

	sum = f3->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f3;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f3;
		c.mas[sum] = vn;
	}

	c.Sort();
	c.Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerSort.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOut) {
	ofstream ofst("OutTest.txt");

	container c;
	c.kol = 3;

	cartoon* f1 = new cartoon;
	strcpy_s(f1->name, "Frozen");
	strcpy_s(f1->country, "USA");
	f1->t = cartoon::type::PAINTED;

	documental* f2 = new documental;
	strcpy_s(f2->name, "Wildlife");
	strcpy_s(f2->country, "USA");
	f2->year = 1;

	feature* f3 = new feature;
	strcpy_s(f3->name, "Kill Bill");
	strcpy_s(f3->country, "USA");
	strcpy_s(f3->director, "Tarantino");

	int sum = 0;
	sum = f1->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f1;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f1;
		c.mas[sum] = vn;
	}

	sum = f2->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f2;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f2;
		c.mas[sum] = vn;
	}

	sum = f3->SumElementsOfString(c.n);
	if (c.mas[sum] == NULL)
	{
		c.mas[sum] = new node;
		c.mas[sum]->next = NULL;
		c.mas[sum]->f = f3;
	}
	else
	{
		node* vn = new node;
		vn->next = c.mas[sum];
		vn->f = f3;
		c.mas[sum] = vn;
	}

	c.Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOut.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}