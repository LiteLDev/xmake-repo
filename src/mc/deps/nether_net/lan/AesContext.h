#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct evp_cipher_ctx_st;
struct evp_cipher_st;
struct evp_md_st;
#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet { struct View; }
// clang-format on

namespace NetherNet {

class AesContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::unique_ptr<evp_cipher_ctx_st, void (*)(evp_cipher_ctx_st*)> const> mCtx;
    ::ll::TypedStorage<8, 24, std::vector<uchar> const>                                               mKey;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                                                     mBuffer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk967e22;
    ::ll::UntypedStorage<8, 24> mUnk6fda12;
    ::ll::UntypedStorage<8, 24> mUnk147ca6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AesContext& operator=(AesContext const&);
    AesContext(AesContext const&);
#endif // @header-generator platform
    AesContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetherNet::ErrorOr<NetherNet::View, std::error_code> Open(::NetherNet::View);
#else // @header-generator platform
    MCNAPI ::NetherNet::ErrorOr<::NetherNet::View, ::std::error_code> Open(::NetherNet::View envelope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetherNet::ErrorOr<NetherNet::View, std::error_code> Seal(::NetherNet::View);
#else // @header-generator platform
    MCNAPI ::NetherNet::ErrorOr<::NetherNet::View, ::std::error_code> Seal(::NetherNet::View plaintext);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
