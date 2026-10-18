#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterfaceCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~INetherNetTransportInterfaceCallbacks() = default;

    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*) = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::Bedrock::Threading::Async<bool>
    OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);
#else // LL_PLAT_C
    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool) = 0;
#else // @header-generator platform
    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnSessionClose(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError, ::Json::Value) = 0;
#else // @header-generator platform
    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    ) = 0;
#endif // @header-generator platform

    virtual void OnSpopViolation() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnBroadcastResponseReceived(::NetherNet::NetworkID, void const*, int) = 0;
#else // @header-generator platform
    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*) = 0;
    // clang-format on
#else // @header-generator platform
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);
#else // LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<bool> $OnSessionResponse(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
