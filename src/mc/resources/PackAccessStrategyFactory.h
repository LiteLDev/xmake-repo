#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DirectoryPackWriteStrategy;
class ResourceLocation;
#else // @header-generator platform
#endif // @header-generator platform
struct AnyAccessStrategyOptions;
struct DirectoryAccessStrategyOptions;
#if defined(LL_PLAT_A) // @header-generator platform
struct DirectoryWihEncryptedBlobAccessStrategyOptions;
struct EncryptedAccessStrategyOptions;
#else // @header-generator platform
#endif // @header-generator platform
struct EncryptedZipAccessStrategyOptions;
struct PackAccessStrategies;
struct ZipAccessStrategyOptions;
// clang-format on

class PackAccessStrategyFactory {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PackAccessStrategies create(::AnyAccessStrategyOptions const&);
#else // @header-generator platform
    MCNAPI static ::PackAccessStrategies create(::AnyAccessStrategyOptions const& create);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PackAccessStrategies createForDirectory(::DirectoryAccessStrategyOptions const&);
#else // @header-generator platform
    MCNAPI static ::PackAccessStrategies createForDirectory(::DirectoryAccessStrategyOptions const& create);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PackAccessStrategies createForEncryptedZip(::EncryptedZipAccessStrategyOptions const&);
#else // @header-generator platform
    MCNAPI static ::PackAccessStrategies createForEncryptedZip(::EncryptedZipAccessStrategyOptions const& create);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PackAccessStrategies createForZip(::ZipAccessStrategyOptions const&);
#else // @header-generator platform
    MCNAPI static ::PackAccessStrategies createForZip(::ZipAccessStrategyOptions const& create);
#endif // @header-generator platform
    // NOLINTEND
};
