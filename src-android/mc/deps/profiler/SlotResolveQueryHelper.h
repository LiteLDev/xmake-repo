#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeData.h"

namespace Bedrock::Profile::Whisker {

class SlotResolveQueryHelper {
public:
    // SlotResolveQueryHelper inner types define
    using SlotRef = ::gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 8> mThread;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mNames;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mOrigIndexToSlotIndex;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::ScopeData>> mSlots;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>>> mLastReturnedSpan;
    ::ll::TypedStorage<8, 24, std::vector<std::string_view>> mTempVecStrStore;
    ::ll::TypedStorage<8, 24, std::vector<const void*>> mTempVecPtrStore;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mTempVecIndStore;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker
