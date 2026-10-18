#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/p2p/NetworkID.h"
#include "mc/deps/nether_net/realms/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace NetherNet {

#if defined(LL_PLAT_A) // @header-generator platform
struct NetworkID : public ::std::variant<std::monostate, NetherNet::P2P::NetworkID, NetherNet::Realms::NetworkID> {
#else // @header-generator platform
struct NetworkID
: public ::std::variant<::std::monostate, ::NetherNet::P2P::NetworkID, ::NetherNet::Realms::NetworkID> {
public:
    // prevent constructor by default
    NetworkID();

#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkID(std::string const&);
#else // @header-generator platform
    MCAPI explicit NetworkID(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkID(::Json::Value const&);
#else // @header-generator platform
    MCAPI explicit NetworkID(::Json::Value const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getHash() const;
#else // @header-generator platform
    MCAPI bool isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCAPI ::std::string toCorrelationId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string toCorrelationId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Json::Value toJson() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value toJson() const;

    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Json::Value const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Json::Value const& value);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
