#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IPackLoadScoped;
// clang-format on

class PackLoadStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unique_ptr<IPackLoadScoped>>> mScopedObjects;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadStorage& operator=(PackLoadStorage const&);
};
