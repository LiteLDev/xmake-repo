#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::memory {

class BufferSource {
public:
    // BufferSource inner types declare
    // clang-format off
    struct LifetimeToken;
    struct UseTracker;
    // clang-format on

    // BufferSource inner types define
    struct LifetimeToken {};

    struct UseTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<const std::vector<uchar>> const>                  mOwnedMemory;
        ::ll::TypedStorage<8, 16, std::weak_ptr<dragon::memory::BufferSource::LifetimeToken> const> mLifetimePtr;
        // NOLINTEND
    };

    using DataTypes = std::variant<
        std::monostate,
        std::shared_ptr<const std::vector<uchar>>,
        std::pair<gsl::span<const uchar>, std::weak_ptr<dragon::memory::BufferSource::LifetimeToken>>>;

    using LifetimePtr = std::shared_ptr<dragon::memory::BufferSource::LifetimeToken>;

    using LifetimeWeakPtr = std::weak_ptr<dragon::memory::BufferSource::LifetimeToken>;

    using UseTrackerPtr = std::shared_ptr<dragon::memory::BufferSource::UseTracker>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<std::monostate, std::shared_ptr<const std::vector<uchar>>, std::pair<gsl::span<const uchar>, std::weak_ptr<dragon::memory::BufferSource::LifetimeToken>>>> mData;
    ::ll::TypedStorage<8, 8, ulong> mSize;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::memory
