#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct EduHeadlessConnectionHandshake {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> serverId;
    ::ll::TypedStorage<8, 24, std::string> sessionToken;
    ::ll::TypedStorage<8, 24, std::string> joinerToHostNonce;
    ::ll::TypedStorage<8, 24, std::string> hostToJoinerNonce;
    ::ll::TypedStorage<8, 8, long>         expiry;
    ::ll::TypedStorage<1, 1, bool>         hasDataFromMess;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd362eb;
    ::ll::UntypedStorage<8, 32> mUnk380989;
    ::ll::UntypedStorage<8, 32> mUnk985c6e;
    ::ll::UntypedStorage<8, 32> mUnk69dace;
    ::ll::UntypedStorage<8, 8>  mUnke2f149;
    ::ll::UntypedStorage<1, 1>  mUnkbf426d;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake& operator=(EduHeadlessConnectionHandshake const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake& operator=(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EduHeadlessConnectionHandshake();

    MCNAPI EduHeadlessConnectionHandshake(::Social::EduHeadlessConnectionHandshake const&);

    MCNAPI EduHeadlessConnectionHandshake(std::string const&, ::Json::Value const&);

    MCNAPI bool isExpired() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI EduHeadlessConnectionHandshake(::Social::EduHeadlessConnectionHandshake const& other);

    MCNAPI EduHeadlessConnectionHandshake(::std::string const& id, ::Json::Value const& json);

    MCNAPI ::Social::EduHeadlessConnectionHandshake& operator=(::Social::EduHeadlessConnectionHandshake const&);

    MCNAPI ~EduHeadlessConnectionHandshake();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::EduHeadlessConnectionHandshake const& other);

    MCNAPI void* $ctor(::std::string const& id, ::Json::Value const& json);
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::EduHeadlessConnectionHandshake const&);

    MCNAPI void* $ctor(std::string const&, ::Json::Value const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
