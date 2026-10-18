#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1>
class MovePriorityQueue {};
#else // @header-generator platform
template <typename T, typename Comparator = std::less<T>>
class MovePriorityQueue {
private:
    using Base           = std::vector<T>;
    using iterator       = Base::iterator;
    using const_iterator = Base::const_iterator;

public:
    Base mC;

public:
    [[nodiscard]] T pop() {
        std::pop_heap(mC.begin(), mC.end(), Comparator{});
        T result = std::move(mC.back());
        mC.pop_back();
        return result;
    }

    [[nodiscard]] T&       top() { return mC.front(); }
    [[nodiscard]] T const& top() const { return mC.front(); }

    [[nodiscard]] bool empty() { return mC.empty(); }

    [[nodiscard]] size_t size() { return mC.size(); }

    [[nodiscard]] const_iterator begin() const { return mC.begin(); }

    [[nodiscard]] const_iterator end() const { return mC.end(); }

    [[nodiscard]] iterator begin() { return mC.begin(); }

    [[nodiscard]] iterator end() { return mC.end(); }

    [[nodiscard]] Base& getInternalContainer() { return mC; }

    void clear() { mC.clear(); }

    void resort() { std::make_heap(mC.begin(), mC.end(), Comparator{}); }
};
#endif // @header-generator platform
