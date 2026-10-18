#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/platform/UUID.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PackIdVersion;
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                             mPackIdVersion;
    ::ll::TypedStorage<8, 24, std::string>                                  mUnlocalizedName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mLocalizedNames;
    ::ll::TypedStorage<4, 4, int>                                           mSubpackCount;
    ::ll::TypedStorage<1, 1, bool>                                          mCanBeRedownloaded;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                  mSourceUUID;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnkf52681;
    ::ll::UntypedStorage<8, 32> mUnk765123;
    ::ll::UntypedStorage<8, 64> mUnk592f5c;
    ::ll::UntypedStorage<4, 4>  mUnk7c24db;
    ::ll::UntypedStorage<1, 1>  mUnke649e8;
    ::ll::UntypedStorage<8, 16> mUnk30ef62;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&);
    WorldPackHistory(WorldPackHistory const&);
    WorldPackHistory();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldPackHistory(::WorldPackHistory const&);
#else // @header-generator platform
    MCNAPI bool initializeFromJson(::Json::Value const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCanBeRedownloaded(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void setLocalizedNames(::std::unordered_map<::std::string, ::std::string> localizedMap);

    MCNAPI void setPackIdVersion(::PackIdVersion const& packIdVersion);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLocalizedNames(std::unordered_map<std::string, std::string>);
#else // @header-generator platform
    MCNAPI void setUnlocalizedName(::std::string const& unlocalizedName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPackIdVersion(::PackIdVersion const&);
#else // @header-generator platform
    MCNAPI ::Json::Value toJsonValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSourceUUID(::mce::UUID const&);

    MCNAPI void setSubpackCount(int);

    MCNAPI void setUnlocalizedName(std::string const&);
#else // @header-generator platform
    MCNAPI ~WorldPackHistory();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorldPackHistory const&);
#else // @header-generator platform
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
