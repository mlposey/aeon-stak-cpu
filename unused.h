#pragma once

// Certain callback functions require parameters the codebase doesn't use. Use
// this after an argument to prevent -Wunused-parameter warnings.
#if defined(__GNUC__)
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
