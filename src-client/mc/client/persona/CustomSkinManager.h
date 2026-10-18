#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/DefaultSkinType.h"
#include "mc/client/persona/PickCustomSkinResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISkinRepository;
class ResourceLocation;
class SkinHandle;
class SkinPack;
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

class CustomSkinManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mSkinRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomSkinManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CustomSkinManager(::gsl::not_null<Bedrock::NonOwnerPointer<ISkinRepository>>);

    MCNAPI void deleteUnreferencedCustomSkinFiles(std::vector<SkinHandle> const&);

    MCNAPI void pickCustomSkin(std::function<void(PickCustomSkinResult)>);

    MCNAPI ~CustomSkinManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ISkinRepository>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
