#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"

// auto generated forward declare list
// clang-format off
struct evp_cipher_ctx_st;
struct evp_cipher_st;
struct evp_md_st;
namespace NetherNet { struct View; }
// clang-format on

namespace NetherNet {

class AesContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::unique_ptr<evp_cipher_ctx_st, void (*)(evp_cipher_ctx_st*)> const> mCtx;
    ::ll::TypedStorage<8, 24, std::vector<uchar> const>                                               mKey;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                                                     mBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    AesContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NetherNet::ErrorOr<NetherNet::View, std::error_code> Open(::NetherNet::View);

    MCNAPI ::NetherNet::ErrorOr<NetherNet::View, std::error_code> Seal(::NetherNet::View);
    // NOLINTEND
};

} // namespace NetherNet
