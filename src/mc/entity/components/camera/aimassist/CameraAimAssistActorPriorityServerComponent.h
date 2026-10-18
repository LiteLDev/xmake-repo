#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components/camera/aimassist/camera_aim_assist_actor_priority/PriorityKey.h"

struct CameraAimAssistActorPriorityServerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                       mTick;
    ::ll::TypedStorage<1, 1, bool>                                                      mDirty;
    ::ll::TypedStorage<8, 24, std::map<CameraAimAssistActorPriority::PriorityKey, int>> mActorPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>>                    mPresetIds;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>>                    mCategoryIds;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>>                    mActorIds;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                           mTick;
    ::ll::TypedStorage<1, 1, bool>                                                          mDirty;
    ::ll::TypedStorage<8, 16, ::std::map<::CameraAimAssistActorPriority::PriorityKey, int>> mActorPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>                    mPresetIds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>                    mCategoryIds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>                    mActorIds;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraAimAssistActorPriorityServerComponent(::CameraAimAssistActorPriorityServerComponent const&);
#else // @header-generator platform
    MCAPI void setExclusion(::HashedString const& presetId, ::HashedString const& actorId, bool isExcluded);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearDirty();

    MCNAPI std::map<CameraAimAssistActorPriority::PriorityKey, int> const& getActorPriorities() const;

    MCNAPI int getOrCreateActorIndex(::HashedString const&);

    MCNAPI int getOrCreateCategoryIndex(::HashedString const&);

    MCNAPI int getOrCreatePresetIndex(::HashedString const&);

    MCNAPI int getPriority(::HashedString const&, ::HashedString const&, ::HashedString const&) const;

    MCNAPI bool isDirty() const;

    MCNAPI void setExclusion(::HashedString const&, ::HashedString const&, bool);

    MCNAPI void setPriority(::HashedString const&, ::HashedString const&, ::HashedString const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraAimAssistActorPriorityServerComponent const&);
#else // @header-generator platform
    MCAPI void setPriority(
        ::HashedString const& presetId,
        ::HashedString const& categoryId,
        ::HashedString const& actorId,
        int                   newPriority
    );
#endif // @header-generator platform
    // NOLINTEND
};
