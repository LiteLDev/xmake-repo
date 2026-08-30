#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/BlockRelPos.h"
#include "mc/world/level/poi/Record.h"

namespace Poi::detail {

struct Container {
public:
    // Container inner types declare
    // clang-format off
    struct QueryIterator;
    // clang-format on

    // Container inner types define
    struct QueryIterator : public ::std::ranges::view_interface<Poi::detail::Container::QueryIterator> {
    public:
        // QueryIterator inner types define
        using Predicate = std::function<bool(const std::pair<Poi::BlockRelPos, Poi::Record>&)>;

        using value_type = std::pair<Poi::BlockRelPos, Poi::Record>;

        using difference_type = long;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, const std::pair<Poi::BlockRelPos, Poi::Record>*> mI;
        ::ll::TypedStorage<8, 8, const std::pair<Poi::BlockRelPos, Poi::Record>*> mIEnd;
        ::ll::UntypedStorage<8, 48>                                               mPred;
        // NOLINTEND
    };

    using iterator = std::pair<Poi::BlockRelPos, Poi::Record>*;

    using const_iterator = const std::pair<Poi::BlockRelPos, Poi::Record>*;

    using reference = std::pair<Poi::BlockRelPos, Poi::Record>&;

    using value_type = std::pair<Poi::BlockRelPos, Poi::Record>;

    using key_type = ::Poi::BlockRelPos;

    using mapped_type = ::Poi::Record;

    using QueryIterator = ::Poi::detail::Container::QueryIterator;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<Poi::BlockRelPos, Poi::Record>>> mRecords;
    // NOLINTEND
};

} // namespace Poi::detail
