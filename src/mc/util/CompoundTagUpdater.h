#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/CompoundTagEditHelper.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CompoundTagEditHelper;
#endif // @header-generator platform
// clang-format on

class CompoundTagUpdater {
public:
    // CompoundTagUpdater inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // CompoundTagUpdater inner types define
    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<std::function<bool(CompoundTagEditHelper&)>>> mFilters;
        ::ll::TypedStorage<8, 24, std::vector<std::function<void(CompoundTagEditHelper&)>>> mUpdates;
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CompoundTagUpdater::Node>>>   mChildren;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::std::function<bool(::CompoundTagEditHelper&)>>> mFilters;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::CompoundTagEditHelper&)>>> mUpdates;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTagUpdater::Node>>>   mChildren;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Node();
#else // @header-generator platform
        MCAPI ~Node();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        mVersion;
    ::ll::TypedStorage<8, 72, ::CompoundTagUpdater::Node> mHead;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CompoundTagUpdater();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _update(::CompoundTagUpdater::Node const&, ::CompoundTag&) const;

    MCNAPI uint getVersion() const;
#else // @header-generator platform
    MCAPI bool _update(::CompoundTagUpdater::Node const& node, ::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND
};
