def to_rna(dna_strand):
    dnaToRna = {
        'G': 'C',
        'C': 'G',
        'T': 'A',
        'A': 'U'
    }

    rna_strand = ''
    for i in dna_strand:
        try:
            rna_strand += dnaToRna[i]
        except KeyError:
            raise ValueError('Error: ', i, 'is not a valid nucleotides')

    return rna_strand
