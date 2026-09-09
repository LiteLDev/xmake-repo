#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
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
    ::ll::UntypedStorage<8, 24> mFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLimitAlgorithmDeserializer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PacketLimitAlgorithmDeserializer(::Core::Path const&);

    MCNAPI ::Bedrock::Result<std::unique_ptr<IPacketLimitAlgorithm>, std::error_code>
    _deserializeAlgorithm(::Json::Value&);

    MCNAPI ::Bedrock::Result<PacketGroupDefinition::PacketGroupBuilder, std::error_code> deserializePacketLimitConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND
};
