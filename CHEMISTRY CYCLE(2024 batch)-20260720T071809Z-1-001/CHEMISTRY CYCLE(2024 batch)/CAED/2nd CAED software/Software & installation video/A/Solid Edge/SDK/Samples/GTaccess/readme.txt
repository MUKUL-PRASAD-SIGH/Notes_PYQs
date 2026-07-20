  DESCRIPTION

  Sample program to enumerate surface bodies in a Part file using SmartView 
  in-process handler. The Client does not have to use Object Linking or Embedding
  to access the OLE for DM Geometry and Topology for Surfaces interfaces.

  Basic steps:
  1. Obtain the CLSID of the Solid Edge Part file (*.par file).
  2. 'CoCreate' the In-process handler for this file.
  3. Obtain the IPeristStorage interface from this handler (it may run the Local Server to get it).
  4. Obtain the Root Storage of this file.
  5. 'Load' the handler with this Root Storage via the IPersistStorage interface.
  6. 'QueryInterface' for the top-level G&T interface -- IDMSurfaceBodies.
  7. Do your stuff (this sample prints out the number of faces in the Bodies found).

