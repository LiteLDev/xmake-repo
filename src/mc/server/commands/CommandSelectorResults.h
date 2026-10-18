#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class CommandSelectorResults {};
#else // @header-generator platform
class CommandSelectorResults {
public:
    std::shared_ptr<std::vector<T0*>> data;

    auto begin() { return data->begin(); }

    auto end() { return data->end(); }

    auto begin() const { return data->begin(); }

    auto end() const { return data->end(); }

    auto size() const { return data->size(); }

    auto count() const { return size(); }

    auto empty() const { return data->empty(); }
};
#endif // @header-generator platform
