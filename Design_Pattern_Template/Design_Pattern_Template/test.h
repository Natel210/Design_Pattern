#pragma once
#include "ATemplateSingleton.h"


class A : public ATemplateSingleton<A>
{

};


struct B : public ATemplateSingleton<B>
{

};


class C : public ATemplateSingleton<A>
{

};