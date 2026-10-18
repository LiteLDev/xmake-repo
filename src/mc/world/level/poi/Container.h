#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/poi/BlockRelPos.h"
#include "mc/world/level/poi/Record.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Poi { struct BlockRelPos; }
namespace Poi { struct Record; }
// clang-format on
#endif // @header-generator platform

namespace Poi::detail {

struct Container {
public:
    // Container inner types declare
    // clang-format off
    struct QueryIterator;
    // clang-format on

    // Container inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueryIterator : public ::std::ranges::view_interface<Poi::detail::Container::QueryIterator> {
    public:
        // QueryIterator inner types define
        using Predicate = std::function<bool(const std::pair<Poi::BlockRelPos, Poi::Record>&)>;

        using value_type = std::pair<Poi::BlockRelPos, Poi::Record>;

        using difference_type = long;

#else // @header-generator platform
    struct QueryIterator : public ::std::ranges::view_interface<::Poi::detail::Container::QueryIterator> {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, const std::pair<Poi::BlockRelPos, Poi::Record>*> mI;
        ::ll::TypedStorage<8, 8, const std::pair<Poi::BlockRelPos, Poi::Record>*> mIEnd;
        ::ll::UntypedStorage<8, 48>                                               mPred;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk167e38;
        ::ll::UntypedStorage<8, 8>  mUnk9ff917;
        ::ll::UntypedStorage<8, 64> mUnkcfc4ea;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using iterator = std::pair<Poi::BlockRelPos, Poi::Record>*;

    using const_iterator = const std::pair<Poi::BlockRelPos, Poi::Record>*;

    using reference = std::pair<Poi::BlockRelPos, Poi::Record>&;

    using value_type = std::pair<Poi::BlockRelPos, Poi::Record>;

    using key_type = ::Poi::BlockRelPos;

    using mapped_type = ::Poi::Record;

    using QueryIterator = ::Poi::detail::Container::QueryIterator;
#else // @header-generator platform
    public:
        // prevent constructor by default
        QueryIterator& operator=(QueryIterator const&);
        QueryIterator(QueryIterator const&);
        QueryIterator();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<Poi::BlockRelPos, Poi::Record>>> mRecords;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk7d133d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Container& operator=(Container const&);
    Container(Container const&);
    Container();
#endif // @header-generator platform
};

} // namespace Poi::detail
