## Exploring the ROOT programming framework

#### Running ROOT on the local machine:
- After downloading the binary file
- run the `thisroot.sh` script as
-
      -> source /mydirectories/bin/thisroot.sh
      -> root

## Key Learnings

- ROOT is a C++ framework used mainly for data analytics, simulation, etc
- Swings both ways using Interpreter and a Compiler as well.

- Interpreter: CLING
- Compiler: ACLIC

- Unlike C++ being a compiler language ROOT's first choice is to 'interpret' the code which makes it easier for rapid prototyping
- But if desired we could also instead compile the program code using ACLIC

- First entrance to ROOT is through the 'Macros' which are the non-compiled programs.
- These macros execute in any of the two ways:
      1. with a function which is the same as the class name as shown in this repo, file name: `graph.c`. Unlike C++ `main()` function is not used macros
      2. Without function names and just with curly braces, file name: `histogram.c`
      
- Root's built in interpreter `CLING` has a Just In Time compiler(JIT) similar to languages like Python and Ruby, i.e they do not need compiler and execute in run time.
- commands with "." in the beginnig are specifically ROOT commands

## File structure

- ROOT programs can load outside libraries written in C++ as well
- These outside programs are injected inside the macros
- These outside C++ programs when injected into the main macro are being compiled by Linux's native g++/gcc compiler and later are injected to the macro.


- Command for macro execution: .x <my-absolute-path>/<macro-name>
- Load a macro or libraries: .L <my-absolute-path>/<file-name>
- Header files loading: gSystem->Load("<file-name>")

- If I want to avail from the compiler instead I could do so using: .L <my-absolute-path>/<file-name>+

- Other important  data structures in ROOT:

- Create a File using: TFile* f = new TFile("my-file.root","recreate")
- Create a Tree and Branch using: TTree t = new TTree("t","my simple tree")
- Create an integer variable using: Int_t myA
- Create a branch using: t.Branch("a",&myA,"a/I")
- Assign values: myA = 100
- Fill values using: t.Fill()
- Hook the Tree with the file(TFile) using: t.Write()


## Other structures in Root:

- TChain(multiple files linked with each other)
- TLegend,etc


## Useful Links:
https://docs.google.com/presentation/d/189f0qsDEnMSk2R5KWLRPz2TdEV5kTfXH1VcuAra4cnU/edit#slide=id.g29f3459464_2_493
https://github.com/root-project/training
https://root.cern/manual/interacting_with_shared_libraries/#using-rootcling-to-generate-dictionaries-manually
https://root.cern/manual/interacting_with_shared_libraries/
http://www-pnp.physics.ox.ac.uk/~brisbane/Teaching/Makefiles/Tutorial_1_Makefiles_and_ROOT.pdf
