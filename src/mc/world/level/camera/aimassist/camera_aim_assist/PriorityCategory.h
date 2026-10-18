#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
class HashedString;
// clang-format on
#endif // @header-generator platform

namespace CameraAimAssist {

class PriorityCategory {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PriorityCategory inner types define
    using TargetPriorityTable = std::unordered_map<HashedString, int>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                        mId;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultBlockPriority;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultEntityPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mBlockPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mEntityPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mBlockTagPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mEntityTypeFamilyPriority;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnkd667eb;
    ::ll::UntypedStorage<4, 4>  mUnka75f28;
    ::ll::UntypedStorage<4, 4>  mUnkdc7df4;
    ::ll::UntypedStorage<8, 64> mUnk744b9a;
    ::ll::UntypedStorage<8, 64> mUnkc8f11d;
    ::ll::UntypedStorage<8, 64> mUnkfc0133;
    ::ll::UntypedStorage<8, 64> mUnk8ec1d7;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityCategory& operator=(PriorityCategory const&);
    PriorityCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PriorityCategory(::CameraAimAssist::PriorityCategory const&);

    MCNAPI PriorityCategory(
        ::HashedString const&                            id,
        int                                              defaultBlockPriority,
        ::std::unordered_map<::HashedString, int> const& blockPriority,
        int                                              defaultEntityPriority,
        ::std::unordered_map<::HashedString, int> const& entityPriority,
        ::std::unordered_map<::HashedString, int> const& blockTagPriority,
        ::std::unordered_map<::HashedString, int> const& entityTypeFamilyPriority
    );

#ifdef LL_PLAT_C
    MCNAPI int getBlockPriority(::BlockType const& block) const;
#endif

    MCNAPI int getEntityPriority(::Actor const& entity) const;

#ifdef LL_PLAT_C
    MCNAPI ::CameraAimAssist::PriorityCategory& operator=(::CameraAimAssist::PriorityCategory&&);
#endif

    MCNAPI ~PriorityCategory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CameraAimAssist::PriorityCategory const& PRIORITY_NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraAimAssist::PriorityCategory const&);

    MCNAPI void* $ctor(
        ::HashedString const&                            id,
        int                                              defaultBlockPriority,
        ::std::unordered_map<::HashedString, int> const& blockPriority,
        int                                              defaultEntityPriority,
        ::std::unordered_map<::HashedString, int> const& entityPriority,
        ::std::unordered_map<::HashedString, int> const& blockTagPriority,
        ::std::unordered_map<::HashedString, int> const& entityTypeFamilyPriority
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraAimAssist
