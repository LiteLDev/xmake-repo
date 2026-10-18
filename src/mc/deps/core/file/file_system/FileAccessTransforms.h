#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileAccessTransforms();
#else // @header-generator platform
    virtual ~FileAccessTransforms() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool readTransform(std::vector<uchar>&) const;
#else // @header-generator platform
    virtual bool readTransform(::std::vector<uchar>& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool writeTransform(std::vector<uchar>&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileAccessTransforms();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool writeTransform(::std::vector<uchar>& stream) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $readTransform(std::vector<uchar>&) const;
#else // @header-generator platform
    MCNAPI bool $readTransform(::std::vector<uchar>& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $writeTransform(std::vector<uchar>&) const;
#else // @header-generator platform
    MCNAPI bool $writeTransform(::std::vector<uchar>& stream) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
