#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/PacketGroupDefinition.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IPacketLimitAlgorithm;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PacketLimitAlgorithmDeserializer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mFilePath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk4d7529;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PacketLimitAlgorithmDeserializer& operator=(PacketLimitAlgorithmDeserializer const&);
    PacketLimitAlgorithmDeserializer(PacketLimitAlgorithmDeserializer const&);
#endif // @header-generator platform
    PacketLimitAlgorithmDeserializer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PacketLimitAlgorithmDeserializer(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit PacketLimitAlgorithmDeserializer(::Core::Path const& filePath);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::unique_ptr<IPacketLimitAlgorithm>, std::error_code>
    _deserializeAlgorithm(::Json::Value&);
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::std::unique_ptr<::IPacketLimitAlgorithm>>
    _deserializeAlgorithm(::Json::Value& algorithmNode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<PacketGroupDefinition::PacketGroupBuilder, std::error_code> deserializePacketLimitConfig();
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::PacketGroupDefinition::PacketGroupBuilder> deserializePacketLimitConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::PacketLimitAlgorithmDeserializer createFromDefaultLocation();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
