#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DirectoryPackWriteStrategy;
class ResourceLocation;
struct AnyAccessStrategyOptions;
struct DirectoryAccessStrategyOptions;
struct DirectoryWihEncryptedBlobAccessStrategyOptions;
struct EncryptedAccessStrategyOptions;
struct EncryptedZipAccessStrategyOptions;
struct PackAccessStrategies;
struct ZipAccessStrategyOptions;
// clang-format on

class PackAccessStrategyFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackAccessStrategies create(::AnyAccessStrategyOptions const&);

    MCNAPI static ::PackAccessStrategies createForDirectory(::DirectoryAccessStrategyOptions const&);

    MCNAPI static ::PackAccessStrategies createForEncryptedZip(::EncryptedZipAccessStrategyOptions const&);

    MCNAPI static ::PackAccessStrategies createForZip(::ZipAccessStrategyOptions const&);
    // NOLINTEND
};
