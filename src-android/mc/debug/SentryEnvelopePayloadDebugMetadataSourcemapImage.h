#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadDebugMetadataSourcemapImage {
public:
    // SentryEnvelopePayloadDebugMetadataSourcemapImage inner types define
    enum class Type : int {
        SourceMap = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayloadDebugMetadataSourcemapImage::Type> type;
    ::ll::TypedStorage<8, 24, std::string>                                             sourceFile;
    ::ll::TypedStorage<8, 24, std::string>                                             debugId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadDebugMetadataSourcemapImage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
