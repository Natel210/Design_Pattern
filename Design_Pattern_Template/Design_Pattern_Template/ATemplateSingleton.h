#pragma once
#include <type_traits> // std::enable_if

template <typename T>
struct IsClassType
{
    template <typename C>
    static char Test(int C::*) {}

    template <typename C>
    static int Test(...) {}

    static const bool value = (sizeof(Test<T>(0)) == 1);
};

template < typename T, typename = typename std::enable_if<IsClassType<T>::value>::type>
class ATemplateSingleton
{
protected:
    ATemplateSingleton()
    {

    }
    virtual ~ATemplateSingleton() = 0
    {

    }

public:
    static T* GetInstance()
    {
        if (m_pInstance == NULL)
            m_pInstance = new T;
        return m_pInstance;
    };

    static void DestroyInstance()
    {
        if (m_pInstance)
        {
            delete m_pInstance;
            m_pInstance = NULL;
        }
    };

private:
    static T* m_pInstance;
};

template <typename T, typename U>
T* ATemplateSingleton<T, U>::m_pInstance = nullptr;