#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/profiler/ScopeData.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker { struct ScopeData; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::Profile::Whisker {

class SlotResolveQueryHelper {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SlotResolveQueryHelper inner types define
    using SlotRef = ::gsl::not_null<const Bedrock::Profile::Whisker::ScopeData*>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk3e127f;
    ::ll::UntypedStorage<8, 24> mUnkd81b9f;
    ::ll::UntypedStorage<8, 24> mUnk2ed60c;
    ::ll::UntypedStorage<8, 24> mUnk55cb42;
    ::ll::UntypedStorage<8, 24> mUnk96621f;
    ::ll::UntypedStorage<8, 24> mUnk78071b;
    ::ll::UntypedStorage<8, 24> mUnk5f3da9;
    ::ll::UntypedStorage<8, 24> mUnkbcbfcd;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotResolveQueryHelper& operator=(SlotResolveQueryHelper const&);
    SlotResolveQueryHelper(SlotResolveQueryHelper const&);
    SlotResolveQueryHelper();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SlotResolveQueryHelper(::std::thread::id thread, ::gsl::span<::std::string_view const> names);

    MCNAPI ::Bedrock::Profile::Whisker::SlotResolveQueryHelper&
    operator=(::Bedrock::Profile::Whisker::SlotResolveQueryHelper&&);

    MCNAPI ::gsl::span<::gsl::not_null<::Bedrock::Profile::Whisker::ScopeData const*>> tryResolveAndFetchAll();

    MCNAPI ~SlotResolveQueryHelper();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::thread::id thread, ::gsl::span<::std::string_view const> names);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker
