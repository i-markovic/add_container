#pragma once
#include <concepts>
#include <ranges>
#include <type_traits>

namespace stde //extended std
{
    template<typename C, typename T>
    bool add(C& c, const T& t)
    {
        if constexpr (requires { c.push_back(t); })
            c.push_back(t);
        else if constexpr (requires { c.insert(t); })
            c.insert(t);
        else
            return false;
        return true;
    }

    template<typename C, typename K, typename V>
    bool add(C& c, const K& k, const V& v)
    {
        if constexpr (requires { c.insert({ k,v }); })
            c.insert({ k,v });
        else
            return false;
        return true;
    }

    template<typename C, std::ranges::input_range T>
    bool add(C& c, const T& t)
    {
        if constexpr (requires { c.insert(c.end(), t.begin(), t.end()); })
            c.insert(c.end(), t.begin(), t.end());
        else if constexpr (requires { c.insert(t.begin(), t.end()); })
            c.insert(t.begin(), t.end());
        else
            return false;
        return true;
    }

}
