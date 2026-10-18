#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSizeEditCount;
    ::ll::TypedStorage<4, 4, uint> mOffsetEditCount;
    ::ll::TypedStorage<4, 4, uint> mRotationEditCount;
    ::ll::TypedStorage<4, 4, uint> mMirrorEditCount;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTelemetryClientData();

    MCNAPI uint getMirrorEditCount() const;

    MCNAPI uint getOffsetEditCount() const;

    MCNAPI uint getRotationEditCount() const;

    MCNAPI uint getSizeEditCount() const;

    MCNAPI bool hasAnyFieldBeenEdited() const;

    MCNAPI void increaseMirrorEditCount();

    MCNAPI void increaseOffsetEditCount();

    MCNAPI void increaseRotationEditCount();

    MCNAPI void increaseSizeEditCount();

    MCNAPI void resetCounts();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
