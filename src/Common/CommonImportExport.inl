#pragma once

#ifdef XRAPI_EXPORTS
#define XRAPI_API XR_EXPORT
#else
#define XRAPI_API XR_IMPORT
#endif

#ifdef XRAICORE_EXPORTS
#define XRAICORE_API XR_EXPORT
#else
#define XRAICORE_API XR_IMPORT
#endif

#ifdef XRCDB_EXPORTS
#define XRCDB_API XR_EXPORT
#else
#define XRCDB_API XR_IMPORT
#endif

#ifdef XRCORE_EXPORTS
#define XRCORE_API XR_EXPORT
#else
#define XRCORE_API XR_IMPORT
#endif

#ifdef XRGAMESPY_EXPORTS
#define XRGAMESPY_API XR_EXPORT
#else
#define XRGAMESPY_API XR_IMPORT
#endif

#ifdef XR_NETSERVER_EXPORTS
#define XRNETSERVER_API XR_EXPORT
#else
#define XRNETSERVER_API XR_IMPORT
#endif

#ifdef XR_PARTICLES_EXPORTS
#define PARTICLES_API XR_EXPORT
#else
#define PARTICLES_API XR_IMPORT
#endif

#ifdef XRPHYSICS_EXPORTS
#define XRPHYSICS_API XR_EXPORT
#else
#define XRPHYSICS_API XR_IMPORT
#endif

#ifdef XRSCRIPTENGINE_EXPORTS
#define XRSCRIPTENGINE_API XR_EXPORT
#else
#define XRSCRIPTENGINE_API XR_IMPORT
#endif

#ifdef XRSOUND_EXPORTS
#define XRSOUND_API XR_EXPORT
#else
#define XRSOUND_API XR_IMPORT
#endif